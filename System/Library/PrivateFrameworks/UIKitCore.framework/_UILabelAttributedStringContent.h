/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UILabelContent.h>

@class NSMutableAttributedString;

@interface _UILabelAttributedStringContent : _UILabelContent {

	NSMutableAttributedString* _attributedString;

}
-(long long)length;
-(BOOL)isEqualToString:(id)arg1 ;
-(id)string;
-(id)attributedString;
-(BOOL)isEqualToAttributedString:(id)arg1 ;
-(BOOL)isAttributed;
-(id)attributedStringContent;
-(id)valueForAttribute:(id)arg1 isUniform:(BOOL*)arg2 ;
-(void)applyToEntireRangeAttribute:(id)arg1 withValue:(id)arg2 ;
-(id)defaultValueForAttribute:(id)arg1 ;
-(void)applyToRange:(NSRange)arg1 attribute:(id)arg2 withValue:(id)arg3 ;
-(BOOL)isNil;
-(id)initWithAttributedString:(id)arg1 defaultAttributesProvider:(/*^block*/id)arg2 ;
@end

