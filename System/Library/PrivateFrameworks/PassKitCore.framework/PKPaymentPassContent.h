/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPassContent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSDictionary, NSArray;

@interface PKPaymentPassContent : PKPassContent <NSSecureCoding> {

	BOOL _supportsTransitOnly;
	NSString* _cobrandName;
	NSURL* _transactionServiceURL;
	NSString* _transactionPushTopic;
	NSURL* _messageServiceURL;
	NSString* _messagePushTopic;
	NSString* _appURLScheme;
	NSDictionary* _localizedSuspendedReasonsByAID;
	NSArray* _availableActions;

}

@property (nonatomic,copy) NSString * cobrandName;                                     //@synthesize cobrandName=_cobrandName - In the implementation block
@property (nonatomic,copy) NSURL * transactionServiceURL;                              //@synthesize transactionServiceURL=_transactionServiceURL - In the implementation block
@property (nonatomic,copy) NSString * transactionPushTopic;                            //@synthesize transactionPushTopic=_transactionPushTopic - In the implementation block
@property (nonatomic,copy) NSURL * messageServiceURL;                                  //@synthesize messageServiceURL=_messageServiceURL - In the implementation block
@property (nonatomic,copy) NSString * messagePushTopic;                                //@synthesize messagePushTopic=_messagePushTopic - In the implementation block
@property (nonatomic,copy) NSString * appURLScheme;                                    //@synthesize appURLScheme=_appURLScheme - In the implementation block
@property (nonatomic,copy) NSDictionary * localizedSuspendedReasonsByAID;              //@synthesize localizedSuspendedReasonsByAID=_localizedSuspendedReasonsByAID - In the implementation block
@property (assign,nonatomic) BOOL supportsTransitOnly;                                 //@synthesize supportsTransitOnly=_supportsTransitOnly - In the implementation block
@property (nonatomic,copy) NSArray * availableActions;                                 //@synthesize availableActions=_availableActions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCobrandName:(NSString *)arg1 ;
-(NSString *)cobrandName;
-(NSURL *)transactionServiceURL;
-(NSString *)transactionPushTopic;
-(NSURL *)messageServiceURL;
-(NSString *)messagePushTopic;
-(NSString *)appURLScheme;
-(NSDictionary *)localizedSuspendedReasonsByAID;
-(BOOL)supportsTransitOnly;
-(NSArray *)availableActions;
-(void)setTransactionServiceURL:(NSURL *)arg1 ;
-(void)setTransactionPushTopic:(NSString *)arg1 ;
-(void)setMessageServiceURL:(NSURL *)arg1 ;
-(void)setMessagePushTopic:(NSString *)arg1 ;
-(void)setAppURLScheme:(NSString *)arg1 ;
-(void)setAvailableActions:(NSArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3 ;
-(void)setLocalizedSuspendedReasonsByAID:(NSDictionary *)arg1 ;
-(void)setSupportsTransitOnly:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

