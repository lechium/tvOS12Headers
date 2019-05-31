/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSISVariable, NSString;

@interface NSLayoutAnchor : NSObject <NSCopying, NSCoding> {

	id _referenceItem;
	long long _attr;
	NSISVariable* _variable;
	NSString* _name;
	id _cachedReferenceItems;
	id _reserved;
	unsigned _type : 2;
	unsigned _reserved3 : 30;

}
+(id)anchorWithItem:(id)arg1 attribute:(long long)arg2 ;
+(id)anchorNamed:(id)arg1 inItem:(id)arg2 symbolicAttribute:(long long)arg3 ;
+(id)_anchorForItem:(id)arg1 attribute:(long long)arg2 ;
+(id)layoutAnchorWithItem:(id)arg1 attribute:(long long)arg2 ;
+(id)layoutAnchorWithName:(id)arg1 forReferenceView:(id)arg2 ;
+(id)anchorWithName:(id)arg1 forReferenceView:(id)arg2 ;
+(id)anchorWithName:(id)arg1 forReferenceView:(id)arg2 symbolicAttribute:(long long)arg3 ;
+(id)anchorNamed:(id)arg1 inItem:(id)arg2 ;
-(id)observableValueInItem:(id)arg1 ;
-(double)valueInItem:(id)arg1 ;
-(id)initWithName:(id)arg1 referenceItem:(id)arg2 symbolicAttribute:(long long)arg3 ;
-(id)initWithIndependentVariableName:(id)arg1 item:(id)arg2 symbolicAttribute:(long long)arg3 ;
-(id)_nearestAncestorLayoutItem;
-(id)_expressionInContext:(SCD_Struct_NS50)arg1 ;
-(id)initWithAnchor:(id)arg1 ;
-(id)_anchorVariable;
-(id)_referenceItem;
-(id)_referencedLayoutItems;
-(id)_constituentAnchors;
-(long long)_constraintAttribute;
-(id)_constraintItem;
-(id)anchorWithName:(id)arg1 referenceItem:(id)arg2 symbolicAttribute:(long long)arg3 ;
-(id)_equationDescriptionInParent;
-(int)_anchorVariableRestriction;
-(void)_accumulateReferenceLayoutItemsIntoTable:(id)arg1 ;
-(id)equationDescription;
-(id)_equationDescriptionLegendEntries;
-(id)_expressionInDefaultContextWithEngine:(id)arg1 ;
-(id)_dependentVariables;
-(BOOL)_isReferencedByConstraint:(id)arg1 ;
-(BOOL)isCompatibleWithAnchor:(id)arg1 ;
-(id)anchorWithName:(id)arg1 ;
-(id)_variableName;
-(BOOL)validateOtherAttribute:(long long)arg1 ;
-(double)_valueInEngine:(id)arg1 ;
-(id)constraintsAffectingLayout;
-(id)_referencingConstraints;
-(BOOL)nsli_lowerIntoExpression:(id)arg1 withCoefficient:(double)arg2 forConstraint:(id)arg3 ;
-(id)_expressionForValueInItem:(id)arg1 ;
-(id)rulesAffectingLayout;
-(id)ruleEqualToAnchor:(id)arg1 ;
-(id)ruleEqualToAnchor:(id)arg1 constant:(double)arg2 ;
-(id)ruleEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3 priority:(float)arg4 identifier:(id)arg5 ;
-(id)ruleGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3 priority:(float)arg4 identifier:(id)arg5 ;
-(id)ruleLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3 priority:(float)arg4 identifier:(id)arg5 ;
-(id)ruleGreaterThanOrEqualToAnchor:(id)arg1 ;
-(id)ruleLessThanOrEqualToAnchor:(id)arg1 ;
-(id)ruleGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 ;
-(id)ruleLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 ;
-(id)ruleEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 identifier:(id)arg4 ;
-(id)ruleGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 identifier:(id)arg4 ;
-(id)ruleLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 identifier:(id)arg4 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)name;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)item;
-(id)constraintEqualToAnchor:(id)arg1 ;
-(id)constraintEqualToAnchor:(id)arg1 constant:(double)arg2 ;
-(id)constraintGreaterThanOrEqualToAnchor:(id)arg1 ;
-(id)constraintLessThanOrEqualToAnchor:(id)arg1 ;
-(id)constraintGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 ;
-(id)constraintLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 ;
-(long long)_anchorType;
-(id)_proxiedItem;
-(long long)_proxiedAttribute;
-(BOOL)hasAmbiguousLayout;
-(id)_referenceView;
-(id)initWithItem:(id)arg1 attribute:(long long)arg2 ;
@end

