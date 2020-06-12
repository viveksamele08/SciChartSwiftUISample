//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisTickLabelStyle.h is part of SCICHART®, High Performance Scientific Charts
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
#import "SCIAlignment.h"

/**
 * Defines a class with style for each tick label rendered by `SCIAxisBase`.
 */
@interface SCIAxisTickLabelStyle : NSObject

/**
 * Creates a new instance of `SCIAxisTickLabelStyle` class.
 * @param margins The tick label margin.
 */
- (instancetype)initWithAlignment:(SCIAlignment)alignment andMargins:(UIEdgeInsets)margins;

/**
 * Creates a new instance of `SCIAxisTickLabelStyle` class.
 * @param margins The tick label margin.
 * @param angle The tick label rotation angle.
 */
- (instancetype)initWithAlignment:(SCIAlignment)alignment margins:(UIEdgeInsets)margins andRotationAngle:(float)angle;
    
/**
 * Tick label alignment.
 */
@property (nonatomic, readonly) SCIAlignment alignment;

/**
 * Tick label margins.
 */
@property (nonatomic, readonly) UIEdgeInsets margins;

/**
 * Tick label rotatioin angle in degrees.
 */
@property (nonatomic, readonly) float rotationAngle;

@end
