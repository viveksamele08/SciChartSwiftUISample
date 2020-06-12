//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIStyleBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIStyleBase.h"

@interface SCIStyleBase<T : id<ISCISuspendable>> ()

/**
 * Creates a new instance of `SCIStyleBase` class.
 * @param styleableObjectType The type of the target styleable object.
 */
- (instancetype)initWithStyleableType:(Class)styleableObjectType NS_DESIGNATED_INITIALIZER;
    
/**
 * Applies this style to specified styleable object.
 * @param styleableObject The styleable object instance.
 */
- (void)applyStyleInternalTo:(T)styleableObject;

/**
 * Discards this style on specified styleable object.
 * @param styleableObject The styleable object instance.
 */
- (void)discardStyleInternalFrom:(T)styleableObject;

/**
 * Saves the specified property into internal property storage.
 * @param property The property name to save.
 * @param value The property value to save.
 * @param styleableObject The target styleable object.
 */
- (void)putProperty:(NSString *)property value:(id)value intoObject:(T)styleableObject;

/**
 * Reads the specified property from internal property storage.
 * @param styleableObject The target styleable object.
 * @param property The property name to save.
 * @param propertyType The type of value.
 * @return The specified property.
 */
- (id)getValueFromProperty:(NSString *)property ofType:(Class)propertyType fromObject:(T)styleableObject;

@end
