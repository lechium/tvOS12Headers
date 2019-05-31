/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUConversationMediaControllerDataSourceDelegate.h>

@protocol TUConversationMediaControllerDelegate, TUConversationManagerDataSource;
@class NSString;

@interface TUConversationMediaController : NSObject <TUConversationMediaControllerDataSourceDelegate> {

	id<TUConversationMediaControllerDelegate> _delegate;
	id<TUConversationManagerDataSource> _dataSource;

}

@property (nonatomic,readonly) id<TUConversationManagerDataSource> dataSource;                       //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<TUConversationMediaControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateConversationWithUUID:(id)arg1 participantPresentationContexts:(id)arg2 ;
-(void)mediaPrioritiesChangeForConversation:(id)arg1 ;
-(id)initWithConversationDataSource:(id)arg1 ;
-(void)setDelegate:(id<TUConversationMediaControllerDelegate>)arg1 ;
-(id<TUConversationMediaControllerDelegate>)delegate;
-(id<TUConversationManagerDataSource>)dataSource;
@end
