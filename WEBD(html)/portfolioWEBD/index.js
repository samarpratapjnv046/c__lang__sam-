console.log("working...")
document.querySelector('.cross').computedStyleMap.display='none';
document.querySelector('.hamburger').addEventListener("click",()=>{
    document.querySelector('.sidebarGo').classList.toggle('sidebarGo');
})