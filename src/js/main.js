


const app = {
    render: function(){

    },

    handleSlider: function(){
        const slides = document.querySelectorAll('.slide')
        const slideBtn = document.querySelectorAll('.slider__btn')
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
    },

    start: function(){
        this.handleSlider();
    }
}

app.start();
