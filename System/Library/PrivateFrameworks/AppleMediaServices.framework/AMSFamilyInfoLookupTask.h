/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>

@protocol AMSFamilyInfoLookupBagContract;
@class NSString;

@interface AMSFamilyInfoLookupTask : AMSTask {

	id<AMSFamilyInfoLookupBagContract> _bagContract;
	NSString* _logKey;

}

@property (nonatomic,retain) id<AMSFamilyInfoLookupBagContract> bagContract;              //@synthesize bagContract=_bagContract - In the implementation block
@property (nonatomic,retain) NSString * logKey;                                           //@synthesize logKey=_logKey - In the implementation block
+(id)_processURLResult:(id)arg1 ;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(id<AMSFamilyInfoLookupBagContract>)bagContract;
-(void)setBagContract:(id<AMSFamilyInfoLookupBagContract>)arg1 ;
-(id)initWithBagContract:(id)arg1 ;
-(id)_performFamilyInfoRequestForAccount:(id)arg1 error:(id*)arg2 ;
-(id)_cachedFamilyInfoLookupResultForAccount:(id)arg1 ;
-(void)_cacheFamilyInfoLookupResult:(id)arg1 forAccount:(id)arg2 ;
-(id)_pathForCachedFamilyInfoLookupResult;
-(id)_currentCachedFamilyInfo;
-(id)performFamilyInfoLookup;
@end

