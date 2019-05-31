/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface MIDICIProfileState : NSObject <NSSecureCoding> {

	NSArray* enabledProfiles;
	NSArray* disabledProfiles;

}

@property (nonatomic,readonly) NSArray * enabledProfiles; 
@property (nonatomic,readonly) NSArray * disabledProfiles; 
+(BOOL)supportsSecureCoding;
-(id)initWithEnabledProfiles:(id)arg1 disabledProfiles:(id)arg2 ;
-(void)updateWithEnabledProfiles:(id)arg1 disabledProfiles:(id)arg2 ;
-(NSArray *)enabledProfiles;
-(NSArray *)disabledProfiles;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
