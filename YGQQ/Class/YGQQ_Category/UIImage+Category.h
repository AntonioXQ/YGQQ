//
//  UIImage+Category.h
//  YGQQ
//
//  Created by 许亚光 on 2016/10/27.
//  Copyright © 2016年 xuyaguang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Category)
// 获取纯色图片
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;
// 获取圆形图片
+ (UIImage *)getCircleImageWithImageName:(NSString *)imageName size:(CGSize)size;
// 剪切图片任意圆角
+ (UIImage*)cutImage:(UIImage *)orImage withRadius:(int)radius;
// 获取任意大小和圆角的额图片
+ (UIImage *)imageWithImageName:(NSString *)imageName size:(CGSize)size radius:(CGFloat)radius;
// 改变image的尺寸
- (UIImage *)turnImageWithSize:(CGSize)size;
/**
 *  根据图片和颜色返回一张加深颜色以后的图片
 */
+ (UIImage *)colorizeImage:(UIImage *)baseImage withColor:(UIColor *)theColor;
@end
