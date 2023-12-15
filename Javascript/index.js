gsap.registerPlugin(ScrollTrigger);

const textElement = gsap.utils.toArray(".text");

textElement.forEach(text => {
    gsap.to(text, {
        backgroundSize: 100%,
        ease: 'none',
        scrollTrigger: {
            trigger: text,
            start: "center 80%",
            end:"center 20%",
            scrub: true,


        }
    })
    
});
