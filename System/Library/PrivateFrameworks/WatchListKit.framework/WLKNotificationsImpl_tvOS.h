/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PBSBulletinServiceDelegate.h>
#import <libobjc.A.dylib/WLKNotificationsImpl.h>

@protocol WLKNotificationCenterDelegate;
@class NSMutableDictionary, NSString;

@interface WLKNotificationsImpl_tvOS : NSObject <PBSBulletinServiceDelegate, WLKNotificationsImpl> {

	id<WLKNotificationCenterDelegate> delegate;
	NSMutableDictionary* _bulletinsByIdentifer;

}

@property (nonatomic,retain) NSMutableDictionary * bulletinsByIdentifer;                     //@synthesize bulletinsByIdentifer=_bulletinsByIdentifer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WLKNotificationCenterDelegate> delegate; 
-(void)_post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4 ;
-(id)_stringForDismissalReason:(unsigned long long)arg1 ;
-(NSMutableDictionary *)bulletinsByIdentifer;
-(void)setBulletinsByIdentifer:(NSMutableDictionary *)arg1 ;
-(void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3 ;
-(void)post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4 ;
-(id)init;
-(void)setDelegate:(id<WLKNotificationCenterDelegate>)arg1 ;
-(id<WLKNotificationCenterDelegate>)delegate;
@end

