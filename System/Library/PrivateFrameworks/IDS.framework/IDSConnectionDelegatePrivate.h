/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSConnectionDelegatePrivate <IDSConnectionDelegate>
@optional
-(void)connection:(id)arg1 messageIdentifier:(id)arg2 alternateCallbackID:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(BOOL)arg6 messageContext:(id)arg7;
-(void)connection:(id)arg1 identifier:(id)arg2 alternateCallbackID:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6;
-(void)connection:(id)arg1 incomingTopLevelMessage:(id)arg2 fromID:(id)arg3 messageContext:(id)arg4;
-(void)connection:(id)arg1 account:(id)arg2 sessionInviteReceived:(id)arg3 fromID:(id)arg4 transportType:(id)arg5 options:(id)arg6 context:(id)arg7 messageContext:(id)arg8;
-(void)connection:(id)arg1 account:(id)arg2 receivedGroupSessionParticipantUpdate:(id)arg3;
-(void)connection:(id)arg1 account:(id)arg2 receivedGroupSessionParticipantDataUpdate:(id)arg3;
-(void)connection:(id)arg1 messageIdentifier:(id)arg2 alternateCallbackID:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(BOOL)arg6;

@end

