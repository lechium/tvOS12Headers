/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKCSSDeclaration.h>

@class IKColor;

@interface IKCSSDeclarationColor : IKCSSDeclaration {

	long long _sourceType;
	IKColor* _color;

}

@property (assign) long long sourceType;                   //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,retain) IKColor * color;              //@synthesize color=_color - In the implementation block
+(id)_stringForColor:(id)arg1 sourceType:(long long)arg2 ;
-(id)initWithParseDeclaration:(id)arg1 info:(id)arg2 ;
-(id)_colorFromParseObject:(id)arg1 sourceType:(long long*)arg2 ;
-(id)_keywordKolorFromParseToken:(id)arg1 ;
-(id)_linearGradientKolorFromParseFunction:(id)arg1 ;
-(id)_kolorFromParseObject:(id)arg1 sourceType:(long long*)arg2 ;
-(id)description;
-(id)stringValue;
-(IKColor *)color;
-(void)setColor:(IKColor *)arg1 ;
-(long long)sourceType;
-(void)setSourceType:(long long)arg1 ;
@end
