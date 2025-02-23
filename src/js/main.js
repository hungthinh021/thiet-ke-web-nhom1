const slides = document.querySelectorAll('.slide')
const slideBtn = document.querySelectorAll('.slider__btn')
const bar = document.querySelector('.bars')
const closeBar = document.querySelector('.close')
const navbarOnMobile = document.querySelector('.header__bottom') 

const app = {
    render: function(){

    },

    handleSlider: function(){

        // slider start
        
        let currentSlide = 1;


        // manual
        const manualNav = function(manual){
            slides.forEach(slide=>{
                slide.classList.remove('active')

                slideBtn.forEach(btn=>{
                    btn.classList.remove('active')
                })
            })

            slides[manual].classList.add('active')
            slideBtn[manual].classList.add('active')
        }

        slideBtn.forEach((btn,index)=>{
            btn.addEventListener('click', ()=>{
                manualNav(index);
                currentSlide = index;
            })
        })

        // auto

        const repeat = function(activeClass){
            let activeSlides = document.getElementsByClassName('active');
            let i = 1;

            let repeater = ()=>
            {
                setTimeout(function(){
                    [...activeSlides].forEach(activeSlide=>{
                        activeSlide.classList.remove('active');
                    })

                    slides[i].classList.add('active')
                    slideBtn[i].classList.add('active')
                    i++
                    
                    if(i == slides.length){ 
                        i = 0;
                    }
                    if(i >= slides.length){
                        return;
                    }
                    repeater()
                },10000)
            }
            repeater()
        }
        repeat()

        // slider start

        // parallax effect

        document.addEventListener('mousemove', parallax)
        
        function parallax(e){
            this.querySelectorAll('.slider__img').forEach(img => {
                const speed = img.getAttribute('data-speed')

                const x = (window.innerHeight - e.pageX*speed)/900
                const y = (window.innerHeight - e.pageY*speed)/900

                img.style.transform = `translateX(${x}px) translateY(${y}px)`
            })
        }
    },

    handleEvent:function(){
        

    },

    start: function(){
        this.handleSlider();

        this.handleEvent();
    }
}

app.start();
