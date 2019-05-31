/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCacheDelegate.h>

@class NSCache, NSString;

@interface TVCKStoreContentMetadataCache : NSObject <NSCacheDelegate> {

	NSCache* _entriesByAdamID;

}

@property (nonatomic,retain) NSCache * entriesByAdamID;              //@synthesize entriesByAdamID=_entriesByAdamID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(NSCache *)entriesByAdamID;
-(id)itemForAdamID:(id)arg1 ;
-(void)setItem:(id)arg1 forAdamID:(id)arg2 withExpirationDate:(id)arg3 ;
-(void)setEntriesByAdamID:(NSCache *)arg1 ;
-(id)init;
@end

