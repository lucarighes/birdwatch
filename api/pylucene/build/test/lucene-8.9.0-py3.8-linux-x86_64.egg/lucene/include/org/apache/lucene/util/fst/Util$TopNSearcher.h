#ifndef org_apache_lucene_util_fst_Util$TopNSearcher_H
#define org_apache_lucene_util_fst_Util$TopNSearcher_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
    class CharSequence;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class Util$TopResults;
          class FST$Arc;
          class Util$FSTPath;
          class FST;
        }
        class IntsRefBuilder;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class Util$TopNSearcher : public ::java::lang::Object {
           public:
            enum {
              mid_init$_cb6e58731b913692,
              mid_init$_332d6382954dace9,
              mid_addStartPaths_251ad13f5f4b702a,
              mid_addStartPaths_666ebe32e5906034,
              mid_search_d3586e6a5bec2ab4,
              mid_addIfCompetitive_4b89866eabcc9027,
              mid_acceptResult_3373b6579afd7d8f,
              mid_acceptResult_5159d6c2d47d2dff,
              mid_acceptPartialPath_3373b6579afd7d8f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Util$TopNSearcher(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Util$TopNSearcher(const Util$TopNSearcher& obj) : ::java::lang::Object(obj) {}

            Util$TopNSearcher(const ::org::apache::lucene::util::fst::FST &, jint, jint, const ::java::util::Comparator &);
            Util$TopNSearcher(const ::org::apache::lucene::util::fst::FST &, jint, jint, const ::java::util::Comparator &, const ::java::util::Comparator &);

            void addStartPaths(const ::org::apache::lucene::util::fst::FST$Arc &, const ::java::lang::Object &, jboolean, const ::org::apache::lucene::util::IntsRefBuilder &) const;
            void addStartPaths(const ::org::apache::lucene::util::fst::FST$Arc &, const ::java::lang::Object &, jboolean, const ::org::apache::lucene::util::IntsRefBuilder &, jfloat, const ::java::lang::CharSequence &, jint) const;
            ::org::apache::lucene::util::fst::Util$TopResults search() const;
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
      namespace util {
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(Util$TopNSearcher);
          extern PyTypeObject *PY_TYPE(Util$TopNSearcher);

          class t_Util$TopNSearcher {
          public:
            PyObject_HEAD
            Util$TopNSearcher object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Util$TopNSearcher *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Util$TopNSearcher&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Util$TopNSearcher&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
