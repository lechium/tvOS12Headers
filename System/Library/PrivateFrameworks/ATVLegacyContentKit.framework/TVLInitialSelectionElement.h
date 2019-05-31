/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSIndexPath, NSDate;

@interface TVLInitialSelectionElement : TVLElement {

	NSIndexPath* _indexPath;
	NSDate* _relevanceDate;

}

@property (nonatomic,retain) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) NSDate * relevanceDate;               //@synthesize relevanceDate=_relevanceDate - In the implementation block
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(NSDate *)relevanceDate;
-(void)setRelevanceDate:(NSDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSIndexPath *)indexPath;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
@end

