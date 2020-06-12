//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISmartPropertyFloat.h is part of SCICHART®, High Performance Scientific Charts
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

#import <Foundation/Foundation.h>

/**
 * Defines the block for the `SCISmartPropertyFloat` listener.
 * Called when new property value is set.
 * @param oldValue The old value.
 * @param newValue The new value.
 */
typedef void (^SCIFloatPropertyChangeListener) (float oldValue, float newValue);

/**
 * Defines a smart property class which can hold `float` value.
 */
@interface SCISmartPropertyFloat : NSObject

/**
 * Creates a new instance of `SCISmartPropertyFloat` class.
 * @param listener The listener change listener for this property.
 */
- (nonnull instancetype)initWithListener:(nonnull SCIFloatPropertyChangeListener)listener NS_DESIGNATED_INITIALIZER;

/**
 * Creates a new instance of `SCISmartPropertyFloat` class.
 * @param listener The listener change listener for this property.
 * @param defaultValue The default value for property.
 */
- (nonnull instancetype)initWithListener:(nonnull SCIFloatPropertyChangeListener)listener defaultValue:(float)defaultValue;

/**
 * Gets the current property value.
 */
@property (nonatomic, readonly) float value;

/**
 * Sets weak value for this property if it was not overridden by `-setStrongValue:` call.
 * @param newValue The new value for property.
 */
- (void)setWeakValue:(float)newValue;

/**
 * Sets weak value for this property which overrides any previously set value.
 * @param newValue The new value for property.
 */
- (void)setStrongValue:(float)newValue;

@end
