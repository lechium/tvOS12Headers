/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber;


@protocol TIUserDictionaryEntry <NSObject>
@property (nonatomic,copy) NSString * phrase; 
@property (nonatomic,copy) NSString * shortcut; 
@property (nonatomic,retain) NSNumber * timestamp; 
@required
-(NSString *)shortcut;
-(void)setShortcut:(id)arg1;
-(NSString *)phrase;
-(void)setPhrase:(id)arg1;
-(NSNumber *)timestamp;
-(void)setTimestamp:(id)arg1;

@end
