#ifndef org_apache_lucene_queries_intervals_Intervals_H
#define org_apache_lucene_queries_intervals_Intervals_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Predicate;
    }
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace automaton {
          class Automaton;
          class CompiledAutomaton;
        }
      }
      namespace queries {
        namespace intervals {
          class IntervalsSource;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace intervals {

          class Intervals : public ::java::lang::Object {
           public:
            enum {
              mid_after_3ca5a622f3b2a0e7,
              mid_atLeast_579f6257879d5e04,
              mid_before_3ca5a622f3b2a0e7,
              mid_containedBy_3ca5a622f3b2a0e7,
              mid_containing_3ca5a622f3b2a0e7,
              mid_extend_c62839a921da3f64,
              mid_fixField_6aa4fe2427e9c605,
              mid_maxgaps_43073414fc587e52,
              mid_maxwidth_43073414fc587e52,
              mid_multiterm_988cddacba1ee5ff,
              mid_multiterm_e590e62509a0f68e,
              mid_multiterm_0369b21e7abaaaf5,
              mid_multiterm_6a877fab8428091a,
              mid_nonOverlapping_3ca5a622f3b2a0e7,
              mid_notContainedBy_3ca5a622f3b2a0e7,
              mid_notContaining_3ca5a622f3b2a0e7,
              mid_notWithin_0688928cde3bd839,
              mid_or_0115693763c31807,
              mid_or_4b5a3abbf0298282,
              mid_or_dbbe2bcb2dd3eb63,
              mid_or_1e2bd0f406ed78d2,
              mid_ordered_0115693763c31807,
              mid_overlapping_3ca5a622f3b2a0e7,
              mid_phrase_126b00664654e455,
              mid_phrase_0115693763c31807,
              mid_prefix_f2af3639d1576282,
              mid_prefix_ef50ee3a45b9bb31,
              mid_term_78f3b92eb4e4bb83,
              mid_term_f2af3639d1576282,
              mid_term_acc5bd202c5b4d89,
              mid_term_6bdf8e9b104c4c15,
              mid_unordered_0115693763c31807,
              mid_unorderedNoOverlaps_3ca5a622f3b2a0e7,
              mid_wildcard_f2af3639d1576282,
              mid_wildcard_ef50ee3a45b9bb31,
              mid_within_0688928cde3bd839,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Intervals(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Intervals(const Intervals& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::queries::intervals::IntervalsSource after(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource atLeast(jint, const JArray< ::org::apache::lucene::queries::intervals::IntervalsSource > &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource before(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource containedBy(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource containing(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource extend(const ::org::apache::lucene::queries::intervals::IntervalsSource &, jint, jint);
            static ::org::apache::lucene::queries::intervals::IntervalsSource fixField(const ::java::lang::String &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource maxgaps(jint, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource maxwidth(jint, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource multiterm(const ::org::apache::lucene::util::automaton::Automaton &, const ::java::lang::String &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource multiterm(const ::org::apache::lucene::util::automaton::CompiledAutomaton &, const ::java::lang::String &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource multiterm(const ::org::apache::lucene::util::automaton::Automaton &, jint, const ::java::lang::String &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource multiterm(const ::org::apache::lucene::util::automaton::CompiledAutomaton &, jint, const ::java::lang::String &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource nonOverlapping(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource notContainedBy(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource notContaining(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource notWithin(const ::org::apache::lucene::queries::intervals::IntervalsSource &, jint, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource or$(const JArray< ::org::apache::lucene::queries::intervals::IntervalsSource > &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource or$(const ::java::util::List &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource or$(jboolean, const JArray< ::org::apache::lucene::queries::intervals::IntervalsSource > &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource or$(jboolean, const ::java::util::List &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource ordered(const JArray< ::org::apache::lucene::queries::intervals::IntervalsSource > &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource overlapping(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource phrase(const JArray< ::java::lang::String > &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource phrase(const JArray< ::org::apache::lucene::queries::intervals::IntervalsSource > &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource prefix(const ::org::apache::lucene::util::BytesRef &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource prefix(const ::org::apache::lucene::util::BytesRef &, jint);
            static ::org::apache::lucene::queries::intervals::IntervalsSource term(const ::java::lang::String &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource term(const ::org::apache::lucene::util::BytesRef &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource term(const ::java::lang::String &, const ::java::util::function::Predicate &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource term(const ::org::apache::lucene::util::BytesRef &, const ::java::util::function::Predicate &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource unordered(const JArray< ::org::apache::lucene::queries::intervals::IntervalsSource > &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource unorderedNoOverlaps(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource wildcard(const ::org::apache::lucene::util::BytesRef &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource wildcard(const ::org::apache::lucene::util::BytesRef &, jint);
            static ::org::apache::lucene::queries::intervals::IntervalsSource within(const ::org::apache::lucene::queries::intervals::IntervalsSource &, jint, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace intervals {
          extern PyType_Def PY_TYPE_DEF(Intervals);
          extern PyTypeObject *PY_TYPE(Intervals);

          class t_Intervals {
          public:
            PyObject_HEAD
            Intervals object;
            static PyObject *wrap_Object(const Intervals&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
