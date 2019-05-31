/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFSystemInfoMigrationDataSource.h>

@protocol HMFSystemInfoMigrationDataSourceDelegate;
@class NSString;

@interface __HMFSetupAssistantDataSource : HMFObject <HMFSystemInfoMigrationDataSource> {

	id<HMFSystemInfoMigrationDataSourceDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<HMFSystemInfoMigrationDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isMigrating,nonatomic,readonly) BOOL migrating; 
-(BOOL)isMigrating;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<HMFSystemInfoMigrationDataSourceDelegate>)arg1 ;
-(id<HMFSystemInfoMigrationDataSourceDelegate>)delegate;
@end
