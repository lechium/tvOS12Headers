/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class NSMutableDictionary;

@interface TVAppStyle : NSObject {

	NSMutableDictionary* _stylesMap;
	SCD_Struct_TV12 _width;
	SCD_Struct_TV12 _minWidth;
	SCD_Struct_TV12 _maxWidth;
	SCD_Struct_TV12 _height;
	SCD_Struct_TV12 _minHeight;
	SCD_Struct_TV12 _maxHeight;
	SCD_Struct_TV12 _padding;
	SCD_Struct_TV12 _margin;
	SCD_Struct_TV12 _interitemSpacing;
	SCD_Struct_TV12 _fontSize;

}

@property (assign,nonatomic) SCD_Struct_TV13 width;                         //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV13 minWidth;                      //@synthesize minWidth=_minWidth - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV13 maxWidth;                      //@synthesize maxWidth=_maxWidth - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV13 height;                        //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV13 minHeight;                     //@synthesize minHeight=_minHeight - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV13 maxHeight;                     //@synthesize maxHeight=_maxHeight - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV13 padding;                       //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV13 margin;                        //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV13 interitemSpacing;              //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV13 fontSize;                      //@synthesize fontSize=_fontSize - In the implementation block
-(id)valueForStyle:(id)arg1 ;
-(void)_setValue:(id)arg1 forStyleProperty:(id)arg2 ;
-(void)setMinWidth:(SCD_Struct_TV13)arg1 ;
-(void)setMinHeight:(SCD_Struct_TV13)arg1 ;
-(void)setMaxHeight:(SCD_Struct_TV13)arg1 ;
-(SCD_Struct_TV13)maxHeight;
-(SCD_Struct_TV13)margin;
-(SCD_Struct_TV13)width;
-(void)setMargin:(SCD_Struct_TV13)arg1 ;
-(void)setWidth:(SCD_Struct_TV13)arg1 ;
-(void)setHeight:(SCD_Struct_TV13)arg1 ;
-(SCD_Struct_TV13)height;
-(SCD_Struct_TV13)maxWidth;
-(void)setPadding:(SCD_Struct_TV13)arg1 ;
-(SCD_Struct_TV13)padding;
-(SCD_Struct_TV13)fontSize;
-(SCD_Struct_TV13)minWidth;
-(SCD_Struct_TV13)interitemSpacing;
-(void)setInteritemSpacing:(SCD_Struct_TV13)arg1 ;
-(void)setFontSize:(SCD_Struct_TV13)arg1 ;
-(void)setMaxWidth:(SCD_Struct_TV13)arg1 ;
-(SCD_Struct_TV13)minHeight;
@end

