/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSLayoutDimension.h>
#import <libobjc.A.dylib/NSCompositeLayoutAnchor.h>

@class NSLayoutDimension, NSArray;

@interface _NSCompositeLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor> {

	NSLayoutDimension* _firstLayoutDimension;
	double _secondLayoutDimensionMultiplier;
	NSLayoutDimension* _secondLayoutDimension;

}

@property (readonly) NSArray * _childAnchors; 
-(id)_expressionInContext:(SCD_Struct_NS50)arg1 ;
-(id)initWithAnchor:(id)arg1 ;
-(NSArray *)_childAnchors;
-(id)equationDescription;
-(double)_valueInEngine:(id)arg1 ;
-(id)initWithDimension:(id)arg1 plusDimension:(id)arg2 times:(double)arg3 ;
-(id)initWithDimension:(id)arg1 plusDimension:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

