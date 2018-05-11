#pragma once
template<class T> class ArrayWrapper;
#include "../WrapperStructs.h"
#include ".././GameEvent/GameEventWrapper.h"
class CarWrapper;
class PriWrapper;
class TeamWrapper;

class BAKKESMOD_PLUGIN_IMPORT TeamGameEventWrapper : public GameEventWrapper {
public:
	CONSTRUCTORS(TeamGameEventWrapper)

	//AUTO-GENERATED FROM FIELDS
	ArrayWrapper<TeamWrapper> GetTeamArchetypes();
	ArrayWrapper<TeamWrapper> GetTeams();
	int GetMaxTeamSize();
	void SetMaxTeamSize(int newMaxTeamSize);
	int GetNumBots();
	void SetNumBots(int newNumBots);
	unsigned long GetbMuteOppositeTeams();
	void SetbMuteOppositeTeams(unsigned long newbMuteOppositeTeams);
	unsigned long GetbDisableMutingOtherTeam();
	void SetbDisableMutingOtherTeam(unsigned long newbDisableMutingOtherTeam);
	unsigned long GetbForfeit();
	void SetbForfeit(unsigned long newbForfeit);
	unsigned long GetbUnfairTeams();
	void SetbUnfairTeams(unsigned long newbUnfairTeams);
	unsigned long GetbAlwaysAutoSelectTeam();
	void SetbAlwaysAutoSelectTeam(unsigned long newbAlwaysAutoSelectTeam);

	//AUTO-GENERATED FUNCTION PROXIES
	void ClearTemporarySpawnSpots();
	bool CanChangeTeam();
	void OnPenaltyChanged();
	void OnTeamForfeited(TeamWrapper Team);
	void HandleTeamForfeit(TeamWrapper Team);
	void MuteOppositeTeams2(unsigned long bMute);
	void UpdateBotCount();
	bool FindBotReplacement(PriWrapper PRI);
	void EndGame();
	void ForceNoContest();
	void AddTemporarySpawnSpot(TeamWrapper Team, CarWrapper Car);
	void HandleSelectedLoadout(PriWrapper PlayerPRI);
	void DestroyTeams();
	void OnAllTeamsCreated();
	void AssignCustomTeamSettings();
	void OnMatchSettingsChanged();
	bool AllTeamsCreated2();
	void SetTeam(int TeamNum, TeamWrapper NewTeam);
	void CreateTeams();
	void OnInit();
	void SetMaxTeamSize2(int MaxSize);
	void UpdateMaxTeamSize();
	void SetUnfairTeams(unsigned long bUnfair);
	void InitBotSkill();
private:
	PIMPL
};