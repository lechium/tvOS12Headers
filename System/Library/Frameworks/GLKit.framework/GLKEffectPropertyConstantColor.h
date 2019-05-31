/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyConstantColor : GLKEffectProperty {

	GLKVector4 _color;
	unsigned char _enabled;

}

@property (assign,nonatomic) unsigned char enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) _GLKVector4 color;                  //@synthesize color=_color - In the implementation block
+(void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2 ;
-(void)dirtyAllUniforms;
-(void)setShaderBindings;
-(void)bind;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setEnabled:(unsigned char)arg1 ;
-(_GLKVector4)color;
-(void)setColor:(_GLKVector4)arg1 ;
-(unsigned char)enabled;
@end

