/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString;


@protocol AMSBagProtocol <NSObject>
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@required
-(id)URLForKey:(id)arg1;
-(NSDate *)expirationDate;
-(NSString *)profileVersion;
-(id)doubleForKey:(id)arg1;
-(BOOL)isExpired;
-(id)arrayForKey:(id)arg1;
-(NSString *)profile;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1;
-(id)boolForKey:(id)arg1;
-(id)stringForKey:(id)arg1;
-(id)dictionaryForKey:(id)arg1;
-(id)integerForKey:(id)arg1;

@end

