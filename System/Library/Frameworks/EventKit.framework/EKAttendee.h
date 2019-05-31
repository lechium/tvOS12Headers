/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKParticipant.h>

@class NSDate;

@interface EKAttendee : EKParticipant

@property (assign,nonatomic) long long participantRole; 
@property (assign,nonatomic) long long participantStatus; 
@property (assign,nonatomic) long long participantType; 
@property (nonatomic,readonly) NSDate * lastModifiedParticipationStatus; 
@property (assign,nonatomic) long long pendingStatus; 
@property (assign,nonatomic) BOOL commentChanged; 
@property (assign,nonatomic) BOOL statusChanged; 
@property (assign,nonatomic) BOOL proposedStartDateChanged; 
+(Class)frozenClass;
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4 ;
+(long long)_ekParticipantStatusFromCalAttendeeStatus:(int)arg1 ;
+(int)_calAttendeeStatusFromEKParticipantStatus:(long long)arg1 ;
+(id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2 ;
+(id)attendeeWithName:(id)arg1 url:(id)arg2 ;
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 ;
+(id)attendeeWithName:(id)arg1 phoneNumber:(id)arg2 ;
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
-(unsigned)flags;
-(long long)pendingStatus;
-(void)setPendingStatus:(long long)arg1 ;
-(BOOL)statusChanged;
-(BOOL)proposedStartDateChanged;
-(BOOL)commentChanged;
-(void)setProposedStartDateChanged:(BOOL)arg1 ;
-(void)setCommentChanged:(BOOL)arg1 ;
-(void)setStatusChanged:(BOOL)arg1 ;
-(BOOL)_isParticipantStatusDirty;
-(int)statusRaw;
-(void)setStatusRaw:(int)arg1 ;
-(void)setPendingStatusRaw:(int)arg1 ;
-(int)pendingStatusRaw;
-(BOOL)_valueForFlag:(unsigned)arg1 ;
-(void)_setFlag:(unsigned)arg1 value:(BOOL)arg2 ;
-(NSDate *)lastModifiedParticipationStatus;
-(void)markAsForward;
-(BOOL)isCurrentUser;
-(void)setFlags:(unsigned)arg1 ;
-(long long)participantRole;
-(long long)participantType;
-(void)setParticipantRole:(long long)arg1 ;
-(void)setParticipantStatus:(long long)arg1 ;
-(void)setParticipantType:(long long)arg1 ;
-(long long)participantStatus;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)owner;
@end

