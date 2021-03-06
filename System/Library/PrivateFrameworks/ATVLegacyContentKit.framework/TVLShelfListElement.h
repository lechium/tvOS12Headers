/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLRootElement.h>

@class TVLHeaderElement, TVLShelfElement, TVLMenuElement;

@interface TVLShelfListElement : TVLRootElement {

	TVLHeaderElement* _header;
	TVLShelfElement* _centerShelf;
	TVLMenuElement* _menu;

}

@property (nonatomic,retain) TVLHeaderElement * header;                  //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) TVLShelfElement * centerShelf;              //@synthesize centerShelf=_centerShelf - In the implementation block
@property (nonatomic,retain) TVLMenuElement * menu;                      //@synthesize menu=_menu - In the implementation block
+(BOOL)isShelfListElement:(id)arg1 ;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(TVLShelfElement *)centerShelf;
-(void)setCenterShelf:(TVLShelfElement *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setHeader:(TVLHeaderElement *)arg1 ;
-(TVLHeaderElement *)header;
-(TVLMenuElement *)menu;
-(void)setMenu:(TVLMenuElement *)arg1 ;
@end

