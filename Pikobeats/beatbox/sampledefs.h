// sample structure built by wav2header based on wav2sketch by Paul Stoffregen

struct sample_t {
  const int16_t * samplearray; // pointer to sample array
  uint32_t samplesize; // size of the sample array
  uint32_t sampleindex; // current sample array index when playing. index at last sample= not playing
  uint8_t MIDINOTE;  // MIDI note on that plays this sample
  uint8_t play_volume; // play volume 0-127
  char sname[20];        // sample name
} sample[] = {

	Bass_001,	// pointer to sample array
	Bass_001_SIZE,	// size of the sample array
	Bass_001_SIZE,	//sampleindex. if at end of sample array sound is not playing
	35,	// MIDI note on that plays this sample
	127,	// play volume 0-127
	"Bass_001",	// sample name

	Clap_004,	// pointer to sample array
	Clap_004_SIZE,	// size of the sample array
	Clap_004_SIZE,	//sampleindex. if at end of sample array sound is not playing
	36,	// MIDI note on that plays this sample
	127,	// play volume 0-127
	"Clap_004",	// sample name

	Clap_07,	// pointer to sample array
	Clap_07_SIZE,	// size of the sample array
	Clap_07_SIZE,	//sampleindex. if at end of sample array sound is not playing
	37,	// MIDI note on that plays this sample
	127,	// play volume 0-127
	"Clap_07",	// sample name

	Closedhat_003,	// pointer to sample array
	Closedhat_003_SIZE,	// size of the sample array
	Closedhat_003_SIZE,	//sampleindex. if at end of sample array sound is not playing
	38,	// MIDI note on that plays this sample
	127,	// play volume 0-127
	"Closedhat_003",	// sample name

	Giddrew,	// pointer to sample array
	Giddrew_SIZE,	// size of the sample array
	Giddrew_SIZE,	//sampleindex. if at end of sample array sound is not playing
	39,	// MIDI note on that plays this sample
	127,	// play volume 0-127
	"Giddrew",	// sample name

	Gidkrch1,	// pointer to sample array
	Gidkrch1_SIZE,	// size of the sample array
	Gidkrch1_SIZE,	//sampleindex. if at end of sample array sound is not playing
	40,	// MIDI note on that plays this sample
	127,	// play volume 0-127
	"Gidkrch1",	// sample name

	Gidstck,	// pointer to sample array
	Gidstck_SIZE,	// size of the sample array
	Gidstck_SIZE,	//sampleindex. if at end of sample array sound is not playing
	41,	// MIDI note on that plays this sample
	127,	// play volume 0-127
	"Gidstck",	// sample name

	Gidtom5,	// pointer to sample array
	Gidtom5_SIZE,	// size of the sample array
	Gidtom5_SIZE,	//sampleindex. if at end of sample array sound is not playing
	42,	// MIDI note on that plays this sample
	127,	// play volume 0-127
	"Gidtom5",	// sample name

	Gidtt1,	// pointer to sample array
	Gidtt1_SIZE,	// size of the sample array
	Gidtt1_SIZE,	//sampleindex. if at end of sample array sound is not playing
	43,	// MIDI note on that plays this sample
	127,	// play volume 0-127
	"Gidtt1",	// sample name

	Gidtt2,	// pointer to sample array
	Gidtt2_SIZE,	// size of the sample array
	Gidtt2_SIZE,	//sampleindex. if at end of sample array sound is not playing
	44,	// MIDI note on that plays this sample
	127,	// play volume 0-127
	"Gidtt2",	// sample name

	Gidtzz2,	// pointer to sample array
	Gidtzz2_SIZE,	// size of the sample array
	Gidtzz2_SIZE,	//sampleindex. if at end of sample array sound is not playing
	45,	// MIDI note on that plays this sample
	127,	// play volume 0-127
	"Gidtzz2",	// sample name

	Gidtzz,	// pointer to sample array
	Gidtzz_SIZE,	// size of the sample array
	Gidtzz_SIZE,	//sampleindex. if at end of sample array sound is not playing
	46,	// MIDI note on that plays this sample
	127,	// play volume 0-127
	"Gidtzz",	// sample name

	Gidwoop,	// pointer to sample array
	Gidwoop_SIZE,	// size of the sample array
	Gidwoop_SIZE,	//sampleindex. if at end of sample array sound is not playing
	47,	// MIDI note on that plays this sample
	127,	// play volume 0-127
	"Gidwoop",	// sample name

	Gidzz1,	// pointer to sample array
	Gidzz1_SIZE,	// size of the sample array
	Gidzz1_SIZE,	//sampleindex. if at end of sample array sound is not playing
	48,	// MIDI note on that plays this sample
	127,	// play volume 0-127
	"Gidzz1",	// sample name

	Gidzz2,	// pointer to sample array
	Gidzz2_SIZE,	// size of the sample array
	Gidzz2_SIZE,	//sampleindex. if at end of sample array sound is not playing
	49,	// MIDI note on that plays this sample
	127,	// play volume 0-127
	"Gidzz2",	// sample name

	Hhat1,	// pointer to sample array
	Hhat1_SIZE,	// size of the sample array
	Hhat1_SIZE,	//sampleindex. if at end of sample array sound is not playing
	50,	// MIDI note on that plays this sample
	127,	// play volume 0-127
	"Hhat1",	// sample name

	Kick_007,	// pointer to sample array
	Kick_007_SIZE,	// size of the sample array
	Kick_007_SIZE,	//sampleindex. if at end of sample array sound is not playing
	51,	// MIDI note on that plays this sample
	127,	// play volume 0-127
	"Kick_007",	// sample name

	Kick_009,	// pointer to sample array
	Kick_009_SIZE,	// size of the sample array
	Kick_009_SIZE,	//sampleindex. if at end of sample array sound is not playing
	52,	// MIDI note on that plays this sample
	127,	// play volume 0-127
	"Kick_009",	// sample name

	Snr_3,	// pointer to sample array
	Snr_3_SIZE,	// size of the sample array
	Snr_3_SIZE,	//sampleindex. if at end of sample array sound is not playing
	53,	// MIDI note on that plays this sample
	127,	// play volume 0-127
	"Snr_3",	// sample name

};
