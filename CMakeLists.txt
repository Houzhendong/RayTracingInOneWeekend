cmake_minimum_required ( VERSION 3.1.0 )

project(RayTracingInOneWeekend)

set(PROJECT_ONE_WEEKEND
    src/InOneWeekend/main.cpp
    src/InOneWeekend/vec3.h
    src/InOneWeekend/hittable.h
    src/InOneWeekend/ray.h
    src/InOneWeekend/sphere.h
    src/InOneWeekend/color.h)

add_executable(inOneWeekend  ${PROJECT_ONE_WEEKEND}) 
