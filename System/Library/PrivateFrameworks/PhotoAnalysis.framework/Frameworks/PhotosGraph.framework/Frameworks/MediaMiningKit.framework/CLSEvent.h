/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSPrimitive.h>

@class NSString, CLLocation, NSArray, NSDate;

@interface CLSEvent : CLSPrimitive {

	BOOL _meetingRoom;
	BOOL _organizedByMe;
	BOOL _accepted;
	NSString* _title;
	CLLocation* _location;
	NSArray* _attendees;
	NSArray* _performers;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * attendees;                                    //@synthesize attendees=_attendees - In the implementation block
@property (nonatomic,retain) NSArray * performers;                                   //@synthesize performers=_performers - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                     //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                       //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                  //@synthesize location=_location - In the implementation block
@property (assign,getter=hasMeetingRoom,nonatomic) BOOL meetingRoom;                 //@synthesize meetingRoom=_meetingRoom - In the implementation block
@property (assign,getter=isOrganizedByMe,nonatomic) BOOL organizedByMe;              //@synthesize organizedByMe=_organizedByMe - In the implementation block
@property (assign,getter=isAccepted,nonatomic) BOOL accepted;                        //@synthesize accepted=_accepted - In the implementation block
+(id)event;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSArray *)performers;
-(void)setPerformers:(NSArray *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSArray *)attendees;
-(void)setAttendees:(NSArray *)arg1 ;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(void)setAccepted:(BOOL)arg1 ;
-(void)setMeetingRoom:(BOOL)arg1 ;
-(void)setOrganizedByMe:(BOOL)arg1 ;
-(BOOL)hasMeetingRoom;
-(BOOL)isOrganizedByMe;
-(BOOL)isAccepted;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
@end

