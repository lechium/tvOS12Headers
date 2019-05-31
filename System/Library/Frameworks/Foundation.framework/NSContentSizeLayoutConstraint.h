/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSLayoutConstraint.h>

@interface NSContentSizeLayoutConstraint : NSLayoutConstraint {

	double _huggingPriority;
	double _compressionResistancePriority;

}

@property (readonly) double huggingPriority;                            //@synthesize huggingPriority=_huggingPriority - In the implementation block
@property (readonly) double compressionResistancePriority;              //@synthesize compressionResistancePriority=_compressionResistancePriority - In the implementation block
-(id)_priorityDescription;
-(double)priorityForVariable:(id)arg1 ;
-(double)huggingPriority;
-(double)compressionResistancePriority;
-(id)initWithLayoutItem:(id)arg1 value:(double)arg2 huggingPriority:(double)arg3 compressionResistancePriority:(double)arg4 orientation:(long long)arg5 ;
@end

