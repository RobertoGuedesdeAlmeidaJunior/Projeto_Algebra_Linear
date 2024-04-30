let navbar = document.querySelector('.navbar');

document.querySelector('#menu-btn').onclick = () => {
    navbar.classList.toggle('active');
    shoppingcart.classList.remove('active');
}

let shoppingcart = document.querySelector('.shopping-cart');

document.querySelector('#cart-btn').onclick = () =>{
    shoppingcart.classList.toggle('active');
    navbar.classList.remove('active');
}

window.onscroll = () =>{
    shoppingcart.classList.remove('active');
    navbar.classList.remove('active');
}


var swiper = new Swiper(".home-slider", {
    autoplay: {
        delay:7500,
        disableOnInteraction: false,
    },
    grabCursor: true,
    loop: true,
});


var swiper = new Swiper(".review-slider", {
    autoplay: {
        delay:7500,
        disableOnInteraction: false,
    },
    grabCursor: true,
    loop: true,
    spaceBetween:20,
    centeredSlides:true,
    breakpoints: {
        0:{
            slidesPerView: 1,
        },
        768:{
            slidesPerView: 2,
        },
        991:{
            slidesPerView: 3,
        },
    },
});

// criar botão de esconder os ingredientes

document.querySelectorAll('.ver-ingredientes').forEach(button => {
    button.addEventListener('click', () => {
        const ingredients = button.parentNode.querySelector('.ingredients');
        if (ingredients.style.display === 'none' || ingredients.style.display === '') {
            ingredients.style.display = 'block';
            button.textContent = 'Esconder Ingredientes';
        } else {
            ingredients.style.display = 'none';
            button.textContent = 'Ver Ingredientes';
        }
    });
});