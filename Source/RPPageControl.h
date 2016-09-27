//
//  RPPageControl.h
//  RPRingedPages
//
//  Created by admin on 16/9/20.
//  Copyright © 2016年 Ding. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, RPPageControlAlignment) {
    RPPageControlAlignmentLeft = 1,
    RPPageControlAlignmentCenter,
    RPPageControlAlignmentRight
};

typedef NS_ENUM(NSUInteger, RPPageControlVerticalAlignment) {
    RPPageControlVerticalAlignmentTop = 1,
    RPPageControlVerticalAlignmentMiddle,
    RPPageControlVerticalAlignmentBottom
};

@interface RPPageControl : UIControl

@property (nonatomic) NSInteger numberOfPages;
@property (nonatomic) NSInteger currentPage;
@property (nonatomic) CGFloat indicatorMargin;
@property (nonatomic) CGFloat indicatorDiameter;
@property (nonatomic) CGFloat minHeight;                                    // default is 36, cannot be less than indicatorDiameter
@property (nonatomic) RPPageControlAlignment alignment;                     // deafult is Center
@property (nonatomic) RPPageControlVerticalAlignment verticalAlignment;     // deafult is Middle

@property (nonatomic, strong) UIImage *pageIndicatorImage;
@property (nonatomic, strong) UIImage *currentPageIndicatorImage;

@end 