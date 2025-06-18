document.addEventListener('DOMContentLoaded', function () {
    const colors = [
        { border: 'yellow', h1: 'rgb(255, 255, 83)', p: 'rgb(255, 255, 160)' },
        { border: 'rgb(255, 145, 0)', h1: 'rgb(255, 151, 109)', p: 'rgb(255, 210, 172)' },
        { border: 'red', h1: 'rgb(255, 72, 72)', p: 'rgb(255, 148, 148)' },
        { border: 'rgb(255, 0, 234)', h1: 'rgb(255, 73, 240)', p: 'rgb(255, 150, 246)' },
        { border: 'rgb(174, 0, 255)', h1: 'rgb(200, 80, 255)', p: 'rgb(221, 149, 255)' },
        { border: 'rgb(0, 110, 255)', h1: 'rgb(74, 152, 255)', p: 'rgb(150, 195, 255)' },
        { border: 'rgb(0, 255, 234)', h1: 'rgb(73, 255, 240)', p: 'rgb(159, 255, 247)' },
        { border: 'rgb(0, 255, 0)', h1: 'rgb(65, 255, 65)', p: 'rgb(161, 255, 161)' },
        { border: 'lightsalmon', h1: 'rgb(255, 194, 170)', p: 'rgb(255, 225, 213)' },
        { border: 'brown', h1: 'rgb(170, 85, 85)', p: 'rgb(172, 124, 124)' }
    ];

    const divs = document.querySelectorAll('#container > div');
    const links = document.querySelectorAll('ul li a');

    divs.forEach((div, index) => {
        if (index < colors.length) {
            const color = colors[index];
            div.style.setProperty('--border-color', color.border);
            div.style.setProperty('--h1-color', color.h1);
            div.style.setProperty('--p-color', color.p);
        }
    });

    links.forEach((link, index) => {
        if (index < colors.length) {
            const color = colors[index];
            link.addEventListener('mouseenter', () => {
                link.style.outline = `1px solid ${color.border}`;
            });

            link.addEventListener('mouseleave', () => {
                link.style.outline = '';
            });
        }
    });
});