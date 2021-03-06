//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPieSeriesDataView.h is part of SCICHART®, High Performance Scientific Charts
// For full terms and conditions of the license, see http://www.scichart.com/scichart-eula/
//
// This source code is protected by international copyright law. Unauthorized
// reproduction, reverse-engineering, or distribution of all or any portion of
// this source code is strictly prohibited.
//
// This source code contains confidential and proprietary trade secrets of
// SciChart Ltd., and should at no time be copied, transferred, sold,
// distributed or made available without express written permission.
//******************************************************************************

#import <UIKit/UIKit.h>

@class SCIPieSeriesInfo;
@class SCIFontStyle;

/// :nodoc:
@interface SCITooltipDataView : UIView

-(void) applyHeadLineStyle:(SCIFontStyle*)style;
-(void) applyDataLineStyle:(SCIFontStyle*)style;

-(void) setColor:(UIColor*)color;

-(CGSize) getTransformedViewSize:(UIView*)view;

@end

/// :nodoc:
@interface SCIPieSeriesDataView : SCITooltipDataView

-(void) setData:(SCIPieSeriesInfo *)data;

@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *dataLabel;

+(SCITooltipDataView *) createInstance;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *nameHeightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *nameWidthConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *dataHeightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *dataWidthConstraint;

@end
