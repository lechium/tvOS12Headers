/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGLibraryChangeConsumer.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, PGLibraryChangeListener, NSObject, PGPhotoChangeToGraphChangeConverter, PGManager, NSMutableArray, PGGraphUpdateJetsamIndicator, PGGraphUpdateManagerTargetTokenState, NSString;

@interface PGGraphUpdateManager : NSObject <PGLibraryChangeConsumer> {

	unsigned char _processingState;
	BOOL _stopRequested;
	BOOL _listening;
	NSMutableSet* _listeners;
	PGLibraryChangeListener* _libraryChangeListener;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSObject*<OS_dispatch_queue> _stateQueue;
	PGPhotoChangeToGraphChangeConverter* _changeConverter;
	PGManager* _manager;
	NSMutableArray* _pendingChanges;
	PGGraphUpdateJetsamIndicator* _jetsamIndicator;
	PGGraphUpdateManagerTargetTokenState* _targetTokenState;

}

@property (nonatomic,retain) PGLibraryChangeListener * libraryChangeListener;                      //@synthesize libraryChangeListener=_libraryChangeListener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;                         //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateQueue;                              //@synthesize stateQueue=_stateQueue - In the implementation block
@property (nonatomic,retain) PGPhotoChangeToGraphChangeConverter * changeConverter;                //@synthesize changeConverter=_changeConverter - In the implementation block
@property (assign,nonatomic) unsigned char processingState;                                        //@synthesize processingState=_processingState - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingChanges;                                      //@synthesize pendingChanges=_pendingChanges - In the implementation block
@property (assign,getter=isListening,nonatomic) BOOL listening;                                    //@synthesize listening=_listening - In the implementation block
@property (assign,nonatomic) BOOL stopRequested;                                                   //@synthesize stopRequested=_stopRequested - In the implementation block
@property (nonatomic,retain) PGGraphUpdateManagerTargetTokenState * targetTokenState;              //@synthesize targetTokenState=_targetTokenState - In the implementation block
@property (nonatomic,readonly) NSMutableSet * listeners;                                           //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,readonly) PGGraphUpdateJetsamIndicator * jetsamIndicator;                     //@synthesize jetsamIndicator=_jetsamIndicator - In the implementation block
@property (nonatomic,readonly) PGManager * manager;                                                //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_startListening;
-(void)startListening;
-(void)_processPendingChanges;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(NSMutableArray *)pendingChanges;
-(void)setPendingChanges:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(void)setStateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)incrementalChangeNotAvailable;
-(void)libraryChangesAvailable:(id)arg1 ;
-(void)stopListening;
-(unsigned char)processingState;
-(PGGraphUpdateManagerTargetTokenState *)targetTokenState;
-(void)_onStopRequestedWasListening:(BOOL)arg1 ;
-(void)setStopRequested:(BOOL)arg1 ;
-(void)_notifyListeners:(id)arg1 notificationType:(unsigned char)arg2 ;
-(id)_tokensForChanges:(id)arg1 ;
-(PGLibraryChangeListener *)libraryChangeListener;
-(void)_processRebuild;
-(void)setProcessingState:(unsigned char)arg1 ;
-(void)_triggerFullRebuildWithProgressBlock:(/*^block*/id)arg1 keepExistingGraph:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(PGGraphUpdateJetsamIndicator *)jetsamIndicator;
-(BOOL)_pauseListening;
-(void)setTargetTokenState:(PGGraphUpdateManagerTargetTokenState *)arg1 ;
-(void)_onEncounteredTargetToken;
-(void)setListening:(BOOL)arg1 ;
-(void)_signalGraphIsConsistentWithTokens:(id)arg1 ;
-(BOOL)stopRequested;
-(id)_graphUpdateForPhotoChanges:(id)arg1 ;
-(void)_triggerUpdateForGraphUpdate:(id)arg1 ;
-(void)_onFinishedProcessingChangesWithTokens:(id)arg1 ;
-(void)_notifyProgress:(double)arg1 ;
-(id)initWithGraphManager:(id)arg1 ;
-(BOOL)isListening;
-(void)addListener:(id)arg1 ;
-(void)performFullRebuildWithProgressBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setLibraryChangeListener:(PGLibraryChangeListener *)arg1 ;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(PGPhotoChangeToGraphChangeConverter *)changeConverter;
-(void)setChangeConverter:(PGPhotoChangeToGraphChangeConverter *)arg1 ;
-(void)removeListener:(id)arg1 ;
-(NSMutableSet *)listeners;
-(NSString *)description;
-(PGManager *)manager;
@end

