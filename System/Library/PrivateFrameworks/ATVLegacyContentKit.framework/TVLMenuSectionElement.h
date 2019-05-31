/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class TVLHeaderElement, NSArray;

@interface TVLMenuSectionElement : TVLElement {

	TVLHeaderElement* _header;
	NSArray* _menuItems;

}

@property (nonatomic,retain) TVLHeaderElement * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSArray * menuItems;                    //@synthesize menuItems=_menuItems - In the implementation block
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setHeader:(TVLHeaderElement *)arg1 ;
-(TVLHeaderElement *)header;
-(void)setMenuItems:(NSArray *)arg1 ;
-(NSArray *)menuItems;
@end

