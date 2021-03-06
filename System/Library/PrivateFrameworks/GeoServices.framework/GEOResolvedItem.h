/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDResolvedItem, NSString;

@interface GEOResolvedItem : NSObject {

	GEOPDResolvedItem* _resolvedItem;

}

@property (nonatomic,readonly) BOOL hasResultIndex; 
@property (nonatomic,readonly) unsigned long long resultIndex; 
@property (nonatomic,readonly) NSString * extractedTerm; 
@property (nonatomic,readonly) int itemType; 
-(NSString *)extractedTerm;
-(unsigned long long)resultIndex;
-(BOOL)hasResultIndex;
-(id)initWithResolvedItem:(id)arg1 ;
-(id)initWithAutocompleteResolvedItem:(id)arg1 ;
-(int)itemType;
@end

