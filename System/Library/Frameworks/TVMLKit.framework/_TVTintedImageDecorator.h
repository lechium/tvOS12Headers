/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageScaleDecorator.h>

@class IKColor;

@interface _TVTintedImageDecorator : TVImageScaleDecorator {

	IKColor* _tintColor;

}

@property (nonatomic,retain,readonly) IKColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
-(id)decoratorIdentifier;
-(id)initWithTintColor:(id)arg1 ;
-(void)drawInContext:(id)arg1 imageRect:(CGRect)arg2 ;
-(IKColor *)tintColor;
@end

