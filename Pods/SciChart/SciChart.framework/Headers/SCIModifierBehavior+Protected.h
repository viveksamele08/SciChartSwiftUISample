//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIModifierBehavior+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIModifierBehavior.h"
#import "SCIAttachableServiceContainer.h"
#import "ISCIChartSurface.h"

/**
 * The extensions in this header are to be used only by subclasses of `SCIModifierBehavior`.
 */
@interface SCIModifierBehavior<__covariant T : id<ISCIChartModifierCore>> ()

@property (strong, nonatomic) SCIAttachableServiceContainer *services;
@property (nonatomic) Class modifierType;
@property (weak, nonatomic) T modifier;
@property (weak, nonatomic) id<ISCIChartSurface> parentSurface;
@property (nonatomic) CGPoint lastUpdatePoint;

/**
 * Creates a new instance of `SCIModifierBehavior` class.
 * @param modifierType Type of the modifier to which this modifier will be attached.
 */
- (instancetype)initWithModifierType:(Class)modifierType NS_DESIGNATED_INITIALIZER;

@end

/**
 * The extensions in this header are to be used only by subclasses of `SCIModifierBehavior`.
 */
@interface SCIModifierBehavior (Protected)

/**
 * Gets a value indicating whether the `SCIModifierBehavior.lastUpdatePoint` is valid.
 */
@property (nonatomic, readonly) BOOL isLastPointValid;

/**
 * Called when is enabled has changed.
 * @param isEnabled Enabled or not enabled.
 */
- (void)onIsEnabledChanged:(BOOL)isEnabled;

/**
 * Resets `SCIModifierBehavior.lastUpdatePoint` x and y to NaN values.
 */
- (void)resetLastUpdatePoint;

@end
