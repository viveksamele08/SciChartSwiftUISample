//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIVerticalLineDrawableBehavior.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIDrawableBehavior.h"
#import "SCIRolloverModifier.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a class which is responsible for drawing crosshair marker for `SCICursorModifier` at the hit test point.
 * @note `T` is the type of modifier to which this behavior will be attached.
 */
@interface SCIVerticalLineDrawableBehavior<__covariant T : SCIRolloverModifier *> : SCIDrawableBehavior<T>

/**
 * Creates a new instance of `SCIVerticalLineDrawableBehavior` class.
 * @param modifierType Type of the modifier to which this modifier will be attached.
 */
- (instancetype)initWithModifierType:(Class)modifierType NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
