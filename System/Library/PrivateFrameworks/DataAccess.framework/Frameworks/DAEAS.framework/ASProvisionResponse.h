/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber, NSString;

@interface ASProvisionResponse : ASItem {

	NSArray* _policies;
	NSNumber* _status;
	BOOL _remoteWipe;
	BOOL _accountOnlyRemoteWipe;
	NSString* _policyType;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
-(id)policyType;
-(id)initWithPolicyType:(id)arg1 ;
-(void)_setStatus:(id)arg1 ;
-(id)asParseRules;
-(void)_setPolicies:(id)arg1 ;
-(void)_setRemoteWipe:(id)arg1 ;
-(void)_setAccountOnlyRemoteWipe:(id)arg1 ;
-(void)setPolicyType:(id)arg1 ;
-(BOOL)remoteWipe;
-(BOOL)accountOnlyRemoteWipe;
-(id)policies;
-(id)init;
-(id)description;
-(id)status;
@end
