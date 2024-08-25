//

const divs_middle = document.querySelectorAll('.div-middle_light-theme_, .div-middle_dark-theme_');
const divs_right = document.querySelectorAll('.div-right_light-theme_, .div-right_dark-theme_');

const toggleButton = document.getElementById('toggle-button');
const themeIcon = document.getElementById('theme-icon');


let LightTheme = true;

themeIcon.src = 'https://www.svgrepo.com/show/407540/sun.svg';

//

toggleButton.addEventListener('click', () => {
    divs_middle.forEach((div) => {
        div.classList.toggle('div-middle_light-theme_');
        div.classList.toggle('div-middle_dark-theme_');
    })
    divs_right.forEach((div) => {
        div.classList.toggle('div-right_light-theme_');
        div.classList.toggle('div-right_dark-theme_');
    })

    LightTheme = !LightTheme;

    if (LightTheme) {
        themeIcon.src = 'https://www.svgrepo.com/show/407540/sun.svg';
        toggleButton.classList.remove('dark-theme');
        toggleButton.classList.add('light-theme');
    } else {
        themeIcon.src = 'https://www.svgrepo.com/show/532875/moon.svg';
        toggleButton.classList.remove('light-theme');
        toggleButton.classList.add('dark-theme');
    }
})

//