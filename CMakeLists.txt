cmake_minimum_required ( VERSION 3.1.0 )

project(RayTracingInOneWeekend)

set(PROJECT_ONE_WEEKEND
    src/InOneWeekend/camera.h
    src/InOneWeekend/color.h
    src/InOneWeekend/hittable_list.h
    src/InOneWeekend/hittable.h
    src/InOneWeekend/main.cpp
    src/InOneWeekend/material.h
    src/InOneWeekend/ray.h
    src/InOneWeekend/rtweekend.h
    src/InOneWeekend/sphere.h
    src/InOneWeekend/vec3.h)

add_executable(inOneWeekend  ${PROJECT_ONE_WEEKEND}) 
