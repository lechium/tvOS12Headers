/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UILabelContent : NSObject {

	/*^block*/id _defaultAttributesProvider;

}
+(id)emptyContentWithDefaultAttributesProvider:(/*^block*/id)arg1 ;
-(long long)length;
-(BOOL)isEqualToString:(id)arg1 ;
-(id)string;
-(id)description;
-(id)attributedString;
-(BOOL)isEqualToAttributedString:(id)arg1 ;
-(BOOL)isAttributed;
-(id)contentWithString:(id)arg1 ;
-(id)contentWithAttributedString:(id)arg1 ;
-(id)attributedStringContent;
-(id)valueForAttribute:(id)arg1 isUniform:(BOOL*)arg2 ;
-(void)applyToEntireRangeAttribute:(id)arg1 withValue:(id)arg2 ;
-(id)defaultValueForAttribute:(id)arg1 ;
-(void)applyToRange:(NSRange)arg1 attribute:(id)arg2 withValue:(id)arg3 ;
-(BOOL)isNil;
-(id)initWithDefaultAttributesProvider:(/*^block*/id)arg1 ;
-(id)_defaultAttributesForString:(id)arg1 ;
@end

