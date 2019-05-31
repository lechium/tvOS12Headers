/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLRootElement.h>

@class TVLHeaderWithCountAndButtonsElement, TVLInitialSelectionElement, NSArray, NSString;

@interface TVLMediaBrowserElement : TVLRootElement {

	TVLHeaderWithCountAndButtonsElement* _header;
	TVLInitialSelectionElement* _initialSelection;
	NSArray* _items;
	NSString* _gridLayout;

}

@property (nonatomic,retain) TVLHeaderWithCountAndButtonsElement * header;               //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) TVLInitialSelectionElement * initialSelection;              //@synthesize initialSelection=_initialSelection - In the implementation block
@property (nonatomic,retain) NSArray * items;                                            //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * gridLayout;                                      //@synthesize gridLayout=_gridLayout - In the implementation block
-(void)setGridLayout:(NSString *)arg1 ;
-(NSString *)gridLayout;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setHeader:(TVLHeaderWithCountAndButtonsElement *)arg1 ;
-(TVLHeaderWithCountAndButtonsElement *)header;
-(void)setInitialSelection:(TVLInitialSelectionElement *)arg1 ;
-(TVLInitialSelectionElement *)initialSelection;
@end

