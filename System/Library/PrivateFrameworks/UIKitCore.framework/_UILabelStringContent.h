/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UILabelContent.h>

@class NSString;

@interface _UILabelStringContent : _UILabelContent {

	NSString* _string;

}
-(long long)length;
-(BOOL)isEqualToString:(id)arg1 ;
-(id)string;
-(id)attributedString;
-(BOOL)isEqualToAttributedString:(id)arg1 ;
-(BOOL)isAttributed;
-(id)attributedStringContent;
-(id)valueForAttribute:(id)arg1 isUniform:(BOOL*)arg2 ;
-(id)defaultValueForAttribute:(id)arg1 ;
-(BOOL)isNil;
-(id)initWithString:(id)arg1 defaultAttributesProvider:(/*^block*/id)arg2 ;
@end
