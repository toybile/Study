document.addEventListener('DOMContentLoaded', function() {

    const elements = {
        bg: document.querySelectorAll('#container > div'),
        h1: document.querySelectorAll('#container div h1'),
        p: document.querySelectorAll('#container div p')
    };

    const observer = new IntersectionObserver((entries, observer) => {
        entries.forEach(entry => {
            if (entry.isIntersecting) {
                if (entry.target.tagName.toLowerCase() === 'div') {
                    entry.target.style.setProperty('--animation', 'color-bg 2.2s ease-in forwards');
                } else if (entry.target.tagName.toLowerCase() === 'h1') {
                    entry.target.style.setProperty('--animation', 'color-h1 2.2s ease-in forwards');
                } else if (entry.target.tagName.toLowerCase() === 'p') {
                    entry.target.style.setProperty('--animation', 'color-p 2.2s ease-in forwards');
                }

                observer.unobserve(entry.target);
            }
        });
    }, {
        threshold: 0.5
    });

    elements.bg.forEach(element => observer.observe(element));
    elements.h1.forEach(element => observer.observe(element));
    elements.p.forEach(element => observer.observe(element));

});