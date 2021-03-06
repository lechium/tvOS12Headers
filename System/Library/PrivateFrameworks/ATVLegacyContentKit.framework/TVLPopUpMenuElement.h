/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLRootElement.h>
#import <libobjc.A.dylib/TVLSectionedMenuElement.h>

@class NSArray, TVLInitialSelectionElement, NSString;

@interface TVLPopUpMenuElement : TVLRootElement <TVLSectionedMenuElement> {

	NSArray* _sections;
	TVLInitialSelectionElement* _initialSelection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * sections; 
@property (nonatomic,retain) TVLInitialSelectionElement * initialSelection; 
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)sections;
-(void)setInitialSelection:(TVLInitialSelectionElement *)arg1 ;
-(TVLInitialSelectionElement *)initialSelection;
-(void)setSections:(NSArray *)arg1 ;
@end

