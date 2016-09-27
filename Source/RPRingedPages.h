//
//  RPRingedPages.h
//  RPRingedPages
//
//  Created by admin on 16/9/20.
//  Copyright © 2016年 Ding. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RPPageControl.h"
#import "RPPagedFlowView.h"

typedef NS_ENUM(NSUInteger, RPPageControlPositon) {
    RPPageControlPositonBellowBody,
    RPPageControlPositonInBodyBottom,
    RPPageControlPositonInBodyTop,
    RPPageControlPositonAboveBody
};

@protocol RPRingedPagesDataSource, RPRingedPagesDelegate;

@interface RPRingedPages : UIView

/// PageControl
@property (nonatomic, strong) RPPageControl *pageControl;
@property (nonatomic, assign) BOOL showPageControl;
@property (nonatomic, assign) RPPageControlPositon pageControlPosition;
@property (nonatomic, assign) CGFloat pageControlMarginToPages;
@property (nonatomic, assign) CGFloat pageControlHeight;
/// carousel - main view
@property (nonatomic, strong) RPPagedFlowView *carousel;

/// Data source and delegate
@property (nonatomic, weak) id<RPRingedPagesDataSource> dataSource;
@property (nonatomic, weak) id<RPRingedPagesDelegate> delegate;

/// Main API
@property (nonatomic, assign) NSInteger currentPageIndex;
- (void)reloadData;

@end

@protocol RPRingedPagesDataSource <NSObject>

- (NSInteger)numberOfItemsInRingedPages:(RPRingedPages *)pages;
- (UIView *)ringedPages:(RPRingedPages *)pages viewForItemAtIndex:(NSInteger)index;

@end

@protocol RPRingedPagesDelegate <NSObject>

@optional
- (void)didSelectCurrentPageInPages:(RPRingedPages *)pages ;

@end