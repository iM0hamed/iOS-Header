//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MapsSuggestionsFlightRequester, MapsSuggestionsNetworkRequester;

@interface MapsSuggestionsFlightUpdater : NSObject
{
    id <MapsSuggestionsFlightRequester> _flightRequester;
    id <MapsSuggestionsNetworkRequester> _networkRequester;
    struct Queue _queue;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)updateFlightsForEntry:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)_updateGateIfNeededForEntry:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_updateFlightsForEntry:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)_getGateMapItemForFlightEntry:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)_getTerminalMapItemForFlightEntry:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithFlightRequester:(id)arg1 networkRequester:(id)arg2;

@end

