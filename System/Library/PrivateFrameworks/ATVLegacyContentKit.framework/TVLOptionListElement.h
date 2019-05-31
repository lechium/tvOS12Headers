/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLRootElement.h>

@class NSString, NSArray;

@interface TVLOptionListElement : TVLRootElement {

	BOOL _autoSelectSingleItem;
	NSString* _title;
	NSString* _footnote;
	NSArray* _items;

}

@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * footnote;                      //@synthesize footnote=_footnote - In the implementation block
@property (assign,nonatomic) BOOL autoSelectSingleItem;              //@synthesize autoSelectSingleItem=_autoSelectSingleItem - In the implementation block
@property (nonatomic,retain) NSArray * items;                        //@synthesize items=_items - In the implementation block
-(NSString *)footnote;
-(void)setFootnote:(NSString *)arg1 ;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(void)setAutoSelectSingleItem:(BOOL)arg1 ;
-(BOOL)autoSelectSingleItem;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
@end

